/*
3.	Delete an Element from an Array
Write a C program to input n elements into an array. 
Input the position of the element to be deleted. 
Delete the element from the specified position by shifting the remaining elements to the left. Display the updated array. 
If the entered position is invalid, display an appropriate message.
*/
#include <stdio.h>
int main() {
    int n, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Invalid position! Please enter a valid position.\n");
    } else {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        printf("Element deleted successfully!\n");
        printf("Updated array: ");
        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        printf("Total number of elements in the updated array: %d\n", n - 1);
    }
    return 0;
}