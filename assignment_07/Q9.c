/*Write a C program to input the number of rows and columns of a two-dimensional array. Enter its elements and display them in matrix form.*/
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    // Ask for the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    // Declare the two-dimensional array
    int arr[rows][cols];
    // Input elements for the array
    printf("Enter %d elements for the array:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Display the array in matrix form
    printf("Matrix form:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}