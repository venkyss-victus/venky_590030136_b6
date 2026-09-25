/*Insert an Element at a Position
Write a C program to input n elements into an array. 
Input a new element and the position where it should be inserted. 
Insert the element at the given position by shifting the existing elements to the right. 
Display the updated array.
 If the entered position is invalid, display an appropriate message
*/
#include <stdio.h>
int main() {
    int n, position, new_element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the new element: ");
    scanf("%d", &position);
    if (position < 0 || position >= n) {
        printf("Invalid position! Please enter a valid position.\n");
        return 1;
    }
    printf("Enter the new element: ");
    scanf("%d", &new_element);
    for (int i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = new_element;
    printf("Updated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}