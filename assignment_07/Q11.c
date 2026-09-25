#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j, k;

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

    // Check if the matrices can be multiplied
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    // Declare the matrices (only once)
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

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

    // Calculate the product matrix
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    printf("Product of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}