/*3.	Variable Scope 
Write a C program without using any user-defined function to demonstrate the difference between: 
local variable, global variable and static variable 
Your program should clearly show how the values of these variables change inside main() and inside a block. 
*/
#include <stdio.h>
// Global 
int globalVar = 10;

int main() {
int localVar = 20;
static int staticVar = 30;
printf("Before entering the block:\n");
printf("Global Variable = %d\n", globalVar);
printf("Local Variable  = %d\n", localVar);
printf("Static Variable = %d\n", staticVar);
{
printf("\nInside the block (before modification):\n");
printf("Global Variable = %d\n", globalVar);
printf("Local Variable  = %d\n", localVar);
printf("Static Variable = %d\n", staticVar);

// Modify the values of the variables
globalVar = 100;
localVar = 200;
staticVar = 300;
printf("\nInside the block (after modification):\n");
printf("Global Variable = %d\n", globalVar);
printf("Local Variable  = %d\n", localVar);
printf("Static Variable = %d\n", staticVar);
}
printf("\nAfter leaving the block:\n");
printf("Global Variable = %d\n", globalVar);
printf("Local Variable  = %d\n", localVar);
printf("Static Variable = %d\n", staticVar);
return 0;
}
