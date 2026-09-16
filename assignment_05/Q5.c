/*2.	Menu-Driven Calculator
Write a C program to create a menu-driven calculator that displays the following menu:
Addition, Subtraction, Multiplication, Division, Modulus, Power, Exit.
Requirements: 
•	Accept the user’s choice and perform the corresponding operation using a switch-case statement. 
•	Take two numbers as input for each calculation.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    result = fmod(num1, num2);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            case 6:
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
