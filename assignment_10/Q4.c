#include <stdio.h>
#include <limits.h>
int findSecond(int arr[], int n, int i, int *max1, int *max2) {
    if (i == n) {
        return *max2;
    }

    if (arr[i] > *max1) {
        *max2 = *max1;
        *max1 = arr[i];
    } else if (arr[i] < *max1 && arr[i] > *max2) {
        *max2 = arr[i];
    }

    return findSecond(arr, n, i + 1, max1, max2);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Fewer than two distinct elements exist.\n");
        return 0;
    }

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    findSecond(arr, n, 0, &max1, &max2);

    if (max2 == INT_MIN) {
        printf("Fewer than two distinct elements exist.\n");
    } else {
        printf("The second-largest distinct element is: %d\n", max2);
    }

    return 0;
}