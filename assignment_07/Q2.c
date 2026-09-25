#include <stdio.h>

int main() {
    int n, data, c = 0;
        
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search for: ");
    scanf("%d", &data);

    for(int i = 0; i < n; i++) {
        if (arr[i] == data) {
            printf("Element found at position: %d\n", i + 1);
            c++;
        }
    }

    if (c > 0) {
        printf("Total occurrences: %d\n", c);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}