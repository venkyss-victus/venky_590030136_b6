/*1.	Array Traversal, Sum, and Average
Write a C program to input n elements into a one-dimensional array.
 Display all the elements of the array and calculate and display their sum and average.
*/
#include <stdio.h>
int main() {
    int n, sum;
    float avg;
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

sum = 0;
for(int i = 0; i < n; i++) {
    sum += arr[i];
}

// Cast sum to float for a precise decimal average
avg = (float)sum / n;

printf("\nThe sum of the elements is: %d\n", sum);
printf("The average of the elements is: %.2f\n", avg);

return 0;
}