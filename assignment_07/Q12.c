/*Row-wise and Column-wise Sums
Write a C program to input an m by n matrix. Calculate and display the sum of the elements in each row and each column.
*/
#include <stdio.h>

int main() {
    int m, n, i, j;
    int matrix[10][10], rowSum[10], colSum[10];

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize row and column sums
    for (i = 0; i < m; i++) {
        rowSum[i] = 0;
    }
    for (j = 0; j < n; j++) {
        colSum[j] = 0;
    }

    // Calculate row-wise sums
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Calculate column-wise sums
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            colSum[j] += matrix[i][j];
        }
    }

    // Display the original matrix
    printf("Original Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Display row-wise sums
    printf("Row-wise Sums:\n");
    for (i = 0; i < m; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Display column-wise sums
    printf("Column-wise Sums:\n");
    for (j = 0; j < n; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}