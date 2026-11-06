/*B2. Combined Use of typedef, Nested Structures, Arrays, and Pointers
• Task: Define a Date structure to store the date of birth of a student. Using typedef, define a Student structure containing roll number, name, CGPA, and nested date of birth.
• Storage: Store the details of n students in an array of structures.
• Functions: Create functions that receive structure pointers and print the student data.
• Scholarship test: Check whether each student is eligible for a merit scholarship. A student is eligible if CGPA is greater than or equal to 8.5.
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

typedef struct {
    int rollNumber;
    char name[50];
    struct Date dob;
    float cgpa;
} Student;

void printStudentData(Student *s) {
    printf("Roll Number: %d\n", s->rollNumber);
    printf("Name: %s\n", s->name);
    printf("Date of Birth: %02d/%02d/%04d\n", s->dob.day, s->dob.month, s->dob.year);
    printf("CGPA: %.2f\n", s->cgpa);
}

void checkScholarship(Student *s) {
    if (s->cgpa > 8.5) {
        printf("Status: Eligible for Merit Scholarship\n");
    } else {
        printf("Status: Not Eligible for Scholarship\n");
    }
    printf("-----------------------------\n");
}

int main() {
    int n = 2;
    Student students[2] = {
        {101, "Alice Smith", {15, 8, 2002}, 9.2},
        {102, "Bob Jones", {22, 11, 2001}, 7.8}
    };

    for (int i = 0; i < n; i++) {
        printStudentData(&students[i]);
        checkScholarship(&students[i]);
    }

    return 0;
}