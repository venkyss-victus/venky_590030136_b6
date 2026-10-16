/*Write a C program to reverse the elements of a one-dimensional array using recursion.*/
#include <stdio.h>

void rev(int arr[], int left, int right) {
    int temp;
    if (left >= right) {
        return;
    }
    temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    rev(arr, left + 1, right - 1);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("before ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    rev(arr, 0, n - 1);
    
    printf("after Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
