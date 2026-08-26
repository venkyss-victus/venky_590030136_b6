#include <stdio.h>

int main()
{
    int s1, s2, s3;
    float avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3.0;

    if (s1 >= 40 && s2 >= 40 && s3 >= 40)
        printf("Passed all subjects\n");
    else
        printf("Failed in one or more subjects\n");

    if (avg >= 75)
        printf("Scored Distinction\n");
    else
        printf("No Distinction\n");

    printf("Average = %.2f", avg);

    return 0;
}