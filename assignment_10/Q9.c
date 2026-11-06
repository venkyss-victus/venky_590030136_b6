/*9. Column with Minimum Sum
Write a C program to find the column having the minimum sum in a matrix using recursion.
*/
#include <stdio.h>
int columnSum(int matrix[10][10], int n, int col, int row) {
    if (row >= n) {
        return 0;
    }
    return matrix[row][col] + columnSum(matrix, n, col, row + 1);
}   
int main() {
    int n, m;
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &n, &m);
    int matrix[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int minSum = columnSum(matrix, n, 0, 0);
    int minCol = 0;
    for (int j = 1; j < m; j++) {
        int sum = columnSum(matrix, n, j, 0);
        if (sum < minSum) {
            minSum = sum;
            minCol = j;
        }
    }
    printf("Column with minimum sum is: %d\n", minCol);
    return 0;
}