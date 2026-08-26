//Write a C program that accepts an integer and a floating-point number from the user. 
// Perform arithmetic operations between them using both: Implicit type conversion and Explicit 
// type conversion  
#include <stdio.h>
int main() {
    int num1;
    float num2;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter a floating-point number: ");
    scanf("%f", &num2);

  
    printf("\n--- Implicit Type Conversion ---\n");
    printf("Addition       = %.2f\n", num1 + num2);
    printf("Subtraction    = %.2f\n", num1 - num2);
    printf("Multiplication = %.2f\n", num1 * num2);
    printf("Division       = %.2f\n", num1 / num2);

    
    printf("\n--- Explicit Type Conversion ---\n");
    printf("Addition       = %.2f\n", (float)num1 + num2);
    printf("Subtraction    = %.2f\n", (float)num1 - num2);
    printf("Multiplication = %.2f\n", (float)num1 * num2);
    printf("Division       = %.2f\n", (float)num1 / num2);

    return 0;
}
 
