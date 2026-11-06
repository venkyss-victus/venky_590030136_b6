/*8. Pascal's Triangle
Write a C program to generate Pascal's triangle using recursion.
*/
#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

void printPascal(int n, int row) {
    if (row >= n) {
        return;
    }
    for (int i = 0; i < n - row - 1; i++) {
        printf(" ");
    }
    for (int i = 0; i <= row; i++) {
        printf("%d ", combination(row, i));
    }
    printf("\n");
    printPascal(n, row + 1);
}

int main() {
    int n;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &n);
    printPascal(n, 0);
    return 0;
}