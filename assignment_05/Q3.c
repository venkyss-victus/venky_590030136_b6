/*BMI Classification
Write a C program that takes input as weight in kilograms and height in metres. Calculate BMI and classify it as:
•	Underweight
•	Normal
•	Overweight
•	Obesity Class I
•	Obesity Class II
•	Obesity Class III
Validate weight and height before calculating BMI
*/
#include <stdio.h>
int main()
{
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Invalid input. Weight and height must be positive values.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Classification: Underweight\n");
    else if (bmi >=18.5 && bmi <24.5)
    printf("normal\n");
    else if (bmi >= 24.5 && bmi < 29.9)
        printf("Classification: Overweight\n");
    else if (bmi >= 30 && bmi < 34.9)
        printf("Classification: Obesity Class I\n");
    else if (bmi >= 35 && bmi < 39.9)
        printf("Classification: Obesity Class II\n");
    else
        printf("Classification: Obesity Class III\n");
        


    return 0;
}