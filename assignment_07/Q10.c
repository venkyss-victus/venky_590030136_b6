/*9.	Addition of Two Matrices
Write a C program to input two matrices of the same order. Calculate their sum and display the resulting matrix. If the matrices have different orders, display an appropriate message.
*/
#include <stdio.h>
int main(){
    int rows1, cols1, rows2, cols2, i, j;
    // Ask for the number of rows and columns for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);
    // Ask for the number of rows and columns for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);
    
    // Check if the matrices have the same order
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices have different orders. Cannot perform addition.\n");
        return 0;
    }
    
    // Declare the matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];
    
    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Calculate the sum of the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display the resulting sum matrix
    printf("Resulting sum matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;   
}