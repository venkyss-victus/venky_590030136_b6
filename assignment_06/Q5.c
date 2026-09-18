/*3.	Prime Numbers in a Range
Write a C program to input two integers 
representing the lower and upper limits. 
Display all prime numbers within the given
 range and print the total number of prime numbers found.
  Use nested loops.
*/
#include <stdio.h>
int main() {
    int lower, upper, i, j, isPrime, count = 0;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for(i=2;i*i<=upper;i++) {
        isPrime = 1;
        for(j=2;j*j<=i;j++) {
            if(i%j==0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal prime numbers found: %d\n", count);
    return 0;
}