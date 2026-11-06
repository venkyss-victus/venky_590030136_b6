/* 5. Recursive Binary Search
Write a C program to search for a given element in a sorted array using recursive binary search.
 */
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int data) {
    if (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == data) {
            return mid;
        }

        if (arr[mid] > data) {
            return binarySearch(arr, left, mid - 1, data);
        }

        return binarySearch(arr, mid + 1, right, data);
    }
    return -1;
}

int main() {
    int n, data;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &data);

    int result = binarySearch(arr, 0, n - 1, data);

    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    return 0;
}
