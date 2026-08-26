/*9.	Operator Precedence 
Write a C program to verify operator precedence using the following expression: 
result1 = a + b * c - d / e + f % g; 
Take values of a, b, c, d, e, f, g from the user. 
result2 = a + (b * c) - (d / e) + (f % g); Display both result1 and result2. 
If both results are the same, operator precedence is verified. 
Your program must also check: 
•	If e = 0, display “Division by zero error” 
•	If g = 0, display “Modulus by zero error” 
Use sample input: a=10, b= 2, c= 3, d= 20, e= 5, f= 17, g= 4 
Result=13 
*/
#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g;
    float result1, result2;

    printf("Enter values for a, b, c, d, e, f, g: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);

    if (e == 0) {
        printf("Division by zero error\n");
        return 1;
    }
    if (g == 0) {
        printf("Modulus by zero error\n");
        return 1;
    }

    result1 = a + b * c - d / e + f % g;
    result2 = a + (b * c) - (d / e) + (f % g);

    printf("Result1: %.2f\n", result1);
    printf("Result2: %.2f\n", result2);

    if (result1 == result2) {
        printf("Operator precedence is verified.\n");
    } else {
        printf("Operator precedence is not verified.\n");
    }

    return 0;
}