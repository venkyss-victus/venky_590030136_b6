/*4.	Decimal-to-Binary Conversion
Write a C program to input a positive decimal integer and convert it into binary using a loop. 
Do not use arrays, strings, or library conversion functions.
*/
#include <stdio.h>
int main()
{
    int decimal, binary = 0, remainder, base = 1;
    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);
    while(decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;       
        base *= 10;
    }
    printf("Binary equivalent: %d\n", binary);
    return 0;
}