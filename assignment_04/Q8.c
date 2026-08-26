/*8.	Complex Logical Condition 
Write a C program to input age, income, and credit score of a person. A person is eligible for a loan if: 
•	age is between 21 and 60 
•	income is greater than 35000 
•	credit score is greater than or equal to 750 
Use logical operators to display whether the person is eligible or not. 
 
*/
#include <stdio.h>
int main() {
    int age, income, creditScore;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter income: ");
    scanf("%d", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    if ((age >= 21 && age <= 60) && (income > 35000) && (creditScore >= 750)) {
        printf("The person is eligible for a loan.\n");
    } else {
        printf("The person is not eligible for a loan.\n");
    }

    return 0;
}