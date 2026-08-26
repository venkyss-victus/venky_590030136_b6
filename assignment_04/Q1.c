/* Data Type Size and Range Write a C program to display the size of the following data types using sizeof(): char, int, float, double, long int, short int. Also print the minimum and maximum values of int and char using appropriate header files.  */
#include <stdio.h>
#include <limits.h>
int main() {
printf("Size of char      : %zu bytes\n", sizeof(char));
printf("Size of int       : %zu bytes\n", sizeof(int));
printf("Size of float     : %zu bytes\n", sizeof(float));
printf("Size of double    : %zu bytes\n", sizeof(double));
printf("Size of long int  : %zu bytes\n", sizeof(long int));
printf("Size of short int : %zu bytes\n", sizeof(short int));

printf("Range of int:\n");
printf("Minimum value = %d\n", INT_MIN);
printf("Maximum value = %d\n\n", INT_MAX);

printf("Range of char:\n");
printf("Minimum value = %d\n", CHAR_MIN);
printf("Maximum value = %d\n", CHAR_MAX);

return 0;
}