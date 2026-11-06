/*2. Block Scope and Shadowing
Write a C program to demonstrate how a local variable hides a global variable with the same name.
*/
#include <stdio.h>
int globvar=100;
void demo(){
    int globvar=223;
    printf("inside demo function globar is %d\n",globvar);
{
    printf("in the inner block is %d \n",globvar);

}
}
int main(){
    printf("inside main function globar is %d\n",globvar);
    demo();
    return 0;
}
