/*13.Transpose and Symmetry of a Matrix
Write a C program to input a square matrix and find its transpose. Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. Display the transpose and the result.
*/
#include <stdio.h>  
int main(){
    int n, i, j, isSymmetric = 1, isSkewSymmetric = 1;
    // Ask for the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    // Declare the square matrix and its transpose
    int matrix[n][n], transpose[n][n];
    // Input elements for the square matrix
    printf("Enter %d elements for the square matrix:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Calculate the transpose of the matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Display the transpose of the matrix
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    // Check for symmetry and skew-symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetric = 0;
            }
            if (matrix[i][j] != -transpose[i][j]) {
                isSkewSymmetric = 0;
            }
        }
    }
    // Display the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else if (isSkewSymmetric) {
        printf("The matrix is skew-symmetric.\n");
    } else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }
}