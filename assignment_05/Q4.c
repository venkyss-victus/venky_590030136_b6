/*BMI Classification
Write a C program that takes input as weight in kilograms and height in metres. Calculate BMI and classify it as:
•	Underweight
•	Normal
•	Overweight
•	Obesity Class I
•	Obesity Class II
•	Obesity Class III
Validate weight and height before calculating BMI.
*/
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in metres: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0) {
        printf("Invalid input. Please enter positive values for weight and height.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 25.0) {
        printf("You have a normal weight.\n");
    } else if (bmi >= 25.0 && bmi < 30.0) {
        printf("You are overweight.\n");
    } else if (bmi >= 30.0 && bmi < 35.0) {
        printf("You have Obesity Class I.\n");
    } else if (bmi >= 35.0 && bmi < 40.0) {
        printf("You have Obesity Class II.\n");
    } else {
        printf("You have Obesity Class III.\n");
    }

    return 0;
}
