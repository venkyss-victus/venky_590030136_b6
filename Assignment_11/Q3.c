/*3. Automatic and Static Variables
Write a C program that calls the same function several times and compares the behaviour of an automatic variable with a static variable.
*/
#include <stdio.h>
void demo(){
    auto int autovar=20;
    int static statvar=20;
    autovar++;
    statvar++;
    printf("autovar=%d\n",autovar);
    printf("statvar=%d\n",statvar);
}
int main(){
    demo();
    demo();
    demo();
    demo();
    return 0;
}