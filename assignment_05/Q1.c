/* 1.	Date Validation
Write a C program that accepts input as day, month, and year. Determine whether the date is valid. Consider:
•	Months with 30 or 31 days
•	February with 28 days
•	February with 29 days in a leap year
•	Invalid years, months, and days
Use nested if statements without switch-case
*/
#include <stdio.h>

int main()
{
    int day, month, year;
    int valid = 0;

    printf("Enter day month year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (year > 0)
    {
        if (month >= 1 && month <= 12)
        {
            if (day > 0)
            {
                if (month == 2)
                {
                    if ((year % 400 == 0) || 
                        (year % 4 == 0 && year % 100 != 0))
                    {
                        if (day <= 29)
                            valid = 1;
                    }
                    else
                    {
                        if (day <= 28)
                            valid = 1;
                    }
                }
                else
                {
                    if (month == 4 || month == 6 || 
                        month == 9 || month == 11)
                    {
                        if (day <= 30)
                            valid = 1;
                    }
                    else
                    {
                        if (day <= 31)
                            valid = 1;
                    }
                }
            }
        }
    }

    if (valid == 1)
        printf("Valid Date\n");
    else
        printf("Invalid Date\n");

    return 0;
}