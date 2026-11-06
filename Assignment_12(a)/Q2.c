#include <stdio.h>

struct Student {
    int roll_number;
    char name[100];
    float marks[5];
    float average;
};

int main()
{
    int n, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter marks in 5 subjects: ");

        float total = 0;

        for(j = 0; j < 5; j++)
        {
            scanf("%f", &s[i].marks[j]);
            total = total + s[i].marks[j];
        }

        s[i].average = total / 5.0;
    }

    if(n > 0)
    {
        
        float highest_average = s[0].average;

        
        for(i = 1; i < n; i++)
        {
            if(s[i].average > highest_average)
            {
                highest_average = s[i].average;
            }
        }

        // Display all students having highest average
        printf("\nStudent(s) with highest average:\n");

        for(i = 0; i < n; i++)
        {
            if(s[i].average == highest_average)
            {
                printf("\nRoll Number: %d", s[i].roll_number);
                printf("\nName: %s", s[i].name);
                printf("\nAverage Marks: %.2f\n", s[i].average);
            }
        }
    }
    else
    {
        printf("No students to display.\n");
    }

    return 0;
}