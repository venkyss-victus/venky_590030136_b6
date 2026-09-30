/*
10. Array Sorting
Write functions to sort an integer array in ascending and descending
order by passing the array through pointers.
Modify the original array without using a predefined sorting function
or another array.
*/

#include <stdio.h>

void ascending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void descending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void display(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

int main()
{
    int arr[100];
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ascending(arr, n);

    printf("Ascending order: ");
    display(arr, n);

    descending(arr, n);

    printf("Descending order: ");
    display(arr, n);

    return 0;
}