/*4.	Keywords Identification 
Write a C program that uses at least 5 C keywords meaningfully. After writing the program, list the keywords used and explain their purpose briefly. 
*/
#include <stdio.h>
int main() {
int num = 33;
printf("The number is: %d\n", num);
if (num > 0) {
 printf("The number is positive.\n");
} else {
printf("The number is not positive.\n");
}
return 0;
}
/*Keywords Used and Their Purpose
Keyword	Purpose
int 	Declares an integer data type and specifies that main() returns an integer value.
if	    Checks whether a given condition is true.
else	Executes an alternative block of code when the if condition is false.
return	Ends the execution of the main() function and returns a value to the operating system.*/