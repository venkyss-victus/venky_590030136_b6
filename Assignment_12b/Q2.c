/*. Student Result Status
• Task: Use enum Result { FAIL, PASS, DISTINCTION } and write a function that returns the result status from marks.
• Key points: Enumeration as a function return type and result classification.
• Implementation guidance: Return DISTINCTION for average >= 75, PASS for average >= 40, and FAIL otherwise. Print both the label and numeric value
*/
#include <stdio.h>

enum Result 
{    
    FAIL = 1,
    PASS, 
    DISTINCTION 
};

int main()
{
    int marks[5], i;
    float average;
    int status_code;
    enum Result result;
    
    printf("Enter marks for 5 subjects: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5.0;
    
    if (average >= 75)
    {
        status_code = 3;
    }
    else if (average >= 40)
    {
        status_code = 2;
    }
    else
    {
        status_code = 1;
    }

    result = (enum Result)status_code;

    switch(result)
    {
        case FAIL:
            printf("Result: FAIL \n");
            break;
        case PASS:
            printf("Result: PASS \n");
            break;
        case DISTINCTION:
            printf("Result: DISTINCTION \n");
            break;
        default:
            printf("Invalid input try again\n");
    }
    return 0;
}
