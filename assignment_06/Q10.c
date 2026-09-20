/*Pascal’s Triangle
Write a C program to input the number of rows and display Pascal’s Triangle using nested loops.
For n = 5, the output should be:
         1
      1    1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/
#include <stdio.h>
int main() {
    int rows, i, j, space, num;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i = 0; i < rows; i++) {
        // Print leading spaces
        for(space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }
        num = 1; // First number in each row is always 1
        for(j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1); // Calculate next number in the row using the formula
        }
        printf("\n");
    }
    return 0;
}   