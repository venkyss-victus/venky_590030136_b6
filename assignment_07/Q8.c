/*7.	Merging Two Arrays
Write a C program to input two arrays, merge their elements into a third array, and display the resulting merged array
*/
#include <stdio.h>
int main() {
    int n1, n2, i, j;
    // Ask for the number of elements in the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    // Ask for the number of elements in the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    // Declare the arrays
    int arr1[n1], arr2[n2], merged[n1 + n2];
    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    // Merge the two arrays
    i = 0;
    j = 0;
    int k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Copy any remaining elements from either array
    while (i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
    // Display the merged array
    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}