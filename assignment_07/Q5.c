/*4.	Largest and Smallest Elements in an Array
Write a C program to find the largest, second-largest, smallest, 
and second-smallest elements
 in an array without sorting it

*/
#include <stdio.h>
#include <limits.h>

void findElements(int arr[], int n) {
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return;
    }

    int largest = INT_MIN, second_largest = INT_MIN;
    int smallest = INT_MAX, second_smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Logic for largest and second largest
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }

        // Logic for smallest and second smallest
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("Largest: %d\n", largest);
    if (second_largest == INT_MIN)
        printf("Second Largest: None (all elements are equal)\n");
    else
        printf("Second Largest: %d\n", second_largest);

    printf("Smallest: %d\n", smallest);
    if (second_smallest == INT_MAX)
        printf("Second Smallest: None (all elements are equal)\n");
    else
        printf("Second Smallest: %d\n", second_smallest);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findElements(arr, n);
    return 0;
}