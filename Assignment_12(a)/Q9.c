/*
C3. Anonymous Union Inside a Structure

• Task:
  Define a structure named Employee containing an integer
  member id and an anonymous union.

• Union members:
  Include hourly_rate of type int and monthly_salary
  of type float in the anonymous union.

• Output:
  Display the employee ID and salary.
*/

#include <stdio.h>

struct Employee {
    int id;

    union {
        int hourly_rate;
        float monthly_salary;
    };
};

int main() {
    struct Employee emp;

    emp.id = 101;
    emp.monthly_salary = 45000.0f;

    printf("Employee ID = %d\n", emp.id);
    printf("Monthly Salary = %.2f\n", emp.monthly_salary);

    return 0;
}