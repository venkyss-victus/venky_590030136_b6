/*A3. Nested Structure
• Task: Define a Date structure containing day, month, and year. Place it inside an Employee structure containing the employee name, employee ID, salary, and date of joining.
• Input and output: Read and display three employee details.
*/
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
struct employee {
    char name[100];
    int emp_id;
    int salary;
    struct Date dob;

};
int main()
{
    struct employee e[3];
    int i=0;
    for(i=0;i<3;i++){
        printf("Enter employee name: ");
        scanf(" %[^\n]s", e[i].name);
        printf("Enter employee id: ");
        scanf("%d", &e[i].emp_id);
        printf("Enter employee salary: ");
        scanf("%d", &e[i].salary);
        printf("Enter employee date of birth (dd mm yyyy): ");
        scanf("%d %d %d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
    }
    for(i=0;i<3;i++){
        printf("\nEmployee %d details:\n", i+1);
        printf("Name: %s\n", e[i].name);
        printf("Employee ID: %d\n", e[i].emp_id);
        printf("Salary: %d\n", e[i].salary);
        printf("Date of Birth: %02d/%02d/%04d\n", e[i].dob.day, e[i].dob.month, e[i].dob.year);
    }
    return 0;
}