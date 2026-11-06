/*A1. Student Record
• Task: Define a structure named Student containing the roll number, student name, and marks in three subjects. Write a C program to read one student record and display the total marks, average marks, and grade.
*/
#include <stdio.h>
struct Student {
    int roll_number;
    char name[100];
    float marks[3];

};

int main() 
{
    struct Student s;
    int i=0;
    s.roll_number = 1;
    printf("Enter student name: ");
    scanf(" %[^\n]s", s.name);
    printf("Enter marks in three subjects: ");
    for(i=0;i<3;i++){
        scanf("%f", &s.marks[i]);

    }
    printf("total marks: %.2f\n", s.marks[0] + s.marks[1] + s.marks[2]);

    printf("average marks: %.2f\n", (s.marks[0] + s.marks[1] + s.marks[2]) / 3.);

   if((s.marks[0] + s.marks[1] + s.marks[2]) / 3 >= 80) {
        printf("Grade: A\n");
    } else if((s.marks[0] + s.marks[1] + s.marks[2]) / 3 >= 60) {
        printf("Grade: B\n");
    } else if((s.marks[0] + s.marks[1] + s.marks[2]) / 3 >= 40) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
    
}