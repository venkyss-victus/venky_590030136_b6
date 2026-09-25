/*14.Diagonal and Triangular Matrix
Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these.
*/
#include <stdio.h>
int main(){
    int n, i, j, mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    int isUpperTriangular = 1, isLowerTriangular = 1, isDiagonal = 1;

    // Ask for the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Declare the square matrix
    int matrix[n][n];

    // Input elements for the square matrix
    printf("Enter %d elements for the square matrix:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sums of main and secondary diagonal elements
    for (i = 0; i < n; i++) {
        mainDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    // Check for upper triangular, lower triangular, and diagonal properties
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && matrix[i][j] != 0) {
                isUpperTriangular = 0;
            }
            if (i < j && matrix[i][j] != 0) {
                isLowerTriangular = 0;
            }
            if (i != j && matrix[i][j] != 0) {
                isDiagonal = 0;
            }
        }
    }

    // Display the results
    printf("Sum of main diagonal elements: %d\n", mainDiagonalSum);
    printf("Sum of secondary diagonal elements: %d\n", secondaryDiagonalSum);

    if (isDiagonal) {
        printf("The matrix is a diagonal matrix.\n");
    } else if (isUpperTriangular) {
        printf("The matrix is an upper triangular matrix.\n");
    } else if (isLowerTriangular) {
        printf("The matrix is a lower triangular matrix.\n");
    } else {
        printf("The matrix is none of these.\n");
    }
}