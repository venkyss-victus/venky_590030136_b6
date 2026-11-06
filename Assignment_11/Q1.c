/*1. Automatic Local Variables
Write a C program to demonstrate that an automatic variable is created when a block is entered and destroyed when the block is exited.
*/
#include <stdio.h>
void demoAutomaticVariable() {
    auto int autoVar=10;
    printf("Inside demoAutomaticVariable function: autoVar = %d\n", autoVar);

{
    auto int autoVar=20;
    printf("Inside inner block: autoVar = %d\n", autoVar);
}

printf("after inside demoAutomaticVariable function: autoVar = %d\n", autoVar);
}
int main() {
    printf("After calling demoAutomaticVariable function\n");
    demoAutomaticVariable();
    return 0;
}