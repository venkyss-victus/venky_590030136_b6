/*5.	Arithmetic and Mathematical Operators Using Header File 
Write a C program to input two numbers and perform the following operations: Addition, Subtraction, Multiplication, Division, Modulus, Power using pow(), Square root using sqrt(), Absolute value using abs(), Floor value using floor(), Ceiling value using ceil() 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num1, num2;
printf("Enter two integers: ");
scanf("%d %d", &num1, &num2);
printf("\nArithmetic Operations:\n");
printf("Addition       = %d\n", num1 + num2);
printf("Subtraction    = %d\n", num1 - num2);
printf("Multiplication = %d\n", num1 * num2);

if (num2 != 0) {
printf("Division       = %.2f\n", (float)num1 / num2);
 printf("Modulus        = %d\n", num1 % num2);
} else {
printf("Division       = Not possible (division by zero)\n");
printf("Modulus        = Not possible (division by zero)\n");
}

printf("\nMathematical Functions:\n");
printf("Power          = %.2f\n", pow(num1, num2));
if (num1 >= 0)
printf("Square Root    = %.2f\n", sqrt(num1));
else
printf("Square Root    = Not possible (negative number)\n");
printf("Absolute Value = %d\n", abs(num1));
printf("Floor Value    = %.2f\n", floor((double)num1 / num2));
printf("Ceiling Value  = %.2f\n", ceil((double)num1 / num2));
return 0;
}