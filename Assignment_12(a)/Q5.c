/*B1. Structure Using typedef
• Task: Use typedef to define a structure named Student without repeatedly writing the struct keyword. Read and display the details of three student records.
• Members: Store roll number, student name, and CGPA.
*/
#include <stdio.h>

// Define the structure using typedef
typedef struct {
    int rollNumber;
    char name[50];
    float cgpa;
} Student;

int main() {
    Student s;

    // Read student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);
    
    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s.name); // Reads string with spaces
    
    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}
