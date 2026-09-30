/*
5. Student Grade Calculation
Write pass-by-value functions to calculate the total and percentage
of marks in five subjects, determine the grade, and check whether
the student passed every subject.
A student fails if the score in any subject is below 40.
*/

#include <stdio.h>

int totalMarks(int a, int b, int c, int d, int e)
{
    return a + b + c + d + e;
}

float percentage(int total)
{
    return total / 5.0;
}

char grade(float p)
{
    if (p >= 90)
        return 'A';
    else if (p >= 80)
        return 'B';
    else if (p >= 70)
        return 'C';
    else if (p >= 60)
        return 'D';
    else
        return 'F';
}

int passed(int a, int b, int c, int d, int e)
{
    if (a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
        return 0;

    return 1;
}

int main()
{
    int a, b, c, d, e, total;
    float per;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = totalMarks(a, b, c, d, e);
    per = percentage(total);

    printf("Total = %d\n", total);
    printf("Percentage = %.2f%%\n", per);
    printf("Grade = %c\n", grade(per));

    if (passed(a, b, c, d, e))
        printf("Result = PASS\n");
    else
        printf("Result = FAIL\n");

    return 0;
}