/*
9. Array Element Analysis
Without sorting, write a function using pointer parameters to find
the smallest, second-smallest, greatest, and second-greatest distinct
elements of an array.
Display an appropriate message if fewer than two distinct values exist.
*/

#include <stdio.h>

int analyse(int *arr, int n, int *small, int *secondSmall,
            int *great, int *secondGreat)
{
    int i;
    int foundSmall = 0, foundGreat = 0;

    *small = arr[0];
    *great = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < *small)
            *small = arr[i];

        if (arr[i] > *great)
            *great = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] != *small)
        {
            if (!foundSmall || arr[i] < *secondSmall)
            {
                *secondSmall = arr[i];
                foundSmall = 1;
            }
        }

        if (arr[i] != *great)
        {
            if (!foundGreat || arr[i] > *secondGreat)
            {
                *secondGreat = arr[i];
                foundGreat = 1;
            }
        }
    }

    return foundSmall && foundGreat;
}

int main()
{
    int arr[100];
    int n, i;
    int small, secondSmall, great, secondGreat;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (analyse(arr, n, &small, &secondSmall, &great, &secondGreat))
    {
        printf("Smallest = %d\n", small);
        printf("Second Smallest = %d\n", secondSmall);
        printf("Greatest = %d\n", great);
        printf("Second Greatest = %d\n", secondGreat);
    }
    else
    {
        printf("Fewer than two distinct values exist.\n");
    }

    return 0;
}