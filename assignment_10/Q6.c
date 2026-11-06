/*. Occurrences of the Maximum Element
Write a C program to find the maximum element in an array and count the number of times it occurs using recursion.
*/
#include <stdio.h>
int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max = findMax(arr, n - 1);
    return (max > arr[n - 1]) ? max : arr[n - 1];
}

int countOccurrences(int arr[], int n, int max) {
    if (n == 0) {
        return 0;
    }
    int count = (arr[n - 1] == max) ? 1 : 0;
    return count + countOccurrences(arr, n - 1, max);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);
    int count = countOccurrences(arr, n, max);
    printf("Maximum element: %d\n", max);
    printf("Number of occurrences: %d\n", count);
    return 0;
}