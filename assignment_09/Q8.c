/*
8. Array Insertion and Deletion
Create a menu-driven program to display an array, insert an element,
and delete an element. Use pointer parameters to update the array size
and return the deleted value.
*/

#include <stdio.h>

void display(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    printf("\n");
}

void insert(int *arr, int *n, int position, int value)
{
    int i;

    for (i = *n; i > position; i--)
        *(arr + i) = *(arr + i - 1);

    *(arr + position) = value;
    (*n)++;
}

int deleteElement(int *arr, int *n, int position)
{
    int i;
    int deleted = *(arr + position);

    for (i = position; i < *n - 1; i++)
        *(arr + i) = *(arr + i + 1);

    (*n)--;

    return deleted;
}

int main()
{
    int arr[100];
    int n, i, choice;
    int position, value, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, n);
                break;

            case 2:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &position);

                if (position < 0 || position > n || n >= 100)
                {
                    printf("Invalid position or array is full.\n");
                    break;
                }

                printf("Enter value: ");
                scanf("%d", &value);

                insert(arr, &n, position, value);
                printf("Element inserted.\n");
                break;

            case 3:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &position);

                if (position < 0 || position >= n)
                {
                    printf("Invalid position.\n");
                    break;
                }

                deleted = deleteElement(arr, &n, position);
                printf("Deleted value = %d\n", deleted);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}