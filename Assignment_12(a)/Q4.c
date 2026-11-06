#include <stdio.h>

struct Student
{
    int roll_number;
    char name[100];
    float marks[3];
    char grade;
};

// Structure passed by VALUE
void displayStudent(struct Student s)
{
    printf("\nRoll Number: %d\n", s.roll_number);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f, %.2f, %.2f\n",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("Grade: %c\n", s.grade);
}

// Structure passed by VALUE
float totalMarks(struct Student s)
{
    return s.marks[0] + s.marks[1] + s.marks[2];
}

// Structure passed by REFERENCE
void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    struct Student s;

    s.roll_number = 1;

    printf("Enter student name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks in three subjects: ");

    for(int i = 0; i < 3; i++)
    {
        scanf("%f", &s.marks[i]);
    }

    s.grade = 'F';

    printf("\n--- Student Details ---\n");
    displayStudent(s);

    printf("Total Marks: %.2f\n", totalMarks(s));

    char newGrade;

    printf("\nEnter new grade: ");
    scanf(" %c", &newGrade);

    updateGrade(&s, newGrade);

    printf("\n--- After Updating Grade ---\n");
    displayStudent(s);

    return 0;
}