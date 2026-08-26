/*7.	Increment and Decrement Operators 
Write a C program to demonstrate the difference between: ++a, a++, --a, a-- 
Use suitable values and print the result after each operation. 
*/
#include <stdio.h>
int main() {
    int a = 5;

    printf("Initial value of a: %d\n", a);
    printf("Pre-increment (++a): %d\n", ++a); 
    printf("Post-increment (a++): %d\n", a++); 
    printf("Pre-decrement (--a): %d\n", --a); 
    printf("Post-decrement (a--): %d\n", a--); 
    printf("Final value of a: %d\n", a); 
return 0;
}