/*6.	Menu-Driven Number Operations
Write a C program that repeatedly displays the following menu:
1. Check Palindrome
2. Check Armstrong Number
3. Check Prime Number
4. Find Sum of Digits
5. Count the number of Digits of an integer
6. Exit

Requirements:
•	Use a do-while loop to display the menu repeatedly.
•	Use switch-case to perform the selected operation.
•	Continue until the user selects Exit.
•	Display an error message for an invalid choice.

*/
#include <stdio.h>
#include <math.h>
int isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
int isArmstrong(int num) {
    int original = num, sum = 0, remainder, digits = 0;
    while (original != 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }
    return sum == num;
}
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;     
}
    return count;
}
int main() {
    int choice, num;
    do {
        printf("\nMenu:\n");
        printf("1. Check Palindrome\n");
        printf("2. Check Armstrong Number\n");
        printf("3. Check Prime Number\n");
        printf("4. Find Sum of Digits\n");
        printf("5. Count the number of Digits of an integer\n");
        printf("6. Exit\n");         
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &num);
                if (isPalindrome(num))
                    printf("%d is a palindrome.\n", num);
                else
                    printf("%d is not a palindrome.\n", num);
                break;
            case 2: 
                printf("Enter an integer: ");
                scanf("%d", &num);
                if (isArmstrong(num))
                    printf("%d is an Armstrong number.\n", num);
                else
                    printf("%d is not an Armstrong number.\n", num);
                break;
            case 3:
                printf("Enter an integer: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;
            case 4:
                printf("Enter an integer: ");
                scanf("%d", &num);
                printf("Sum of digits of %d is %d.\n", num, sumOfDigits(num));
                break;
            case 5:
                printf("Enter an integer: ");
                scanf("%d", &num);
                printf("Number of digits in %d is %d.\n", num, countDigits(num));
                break;
            case 6:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    return 0;           
}