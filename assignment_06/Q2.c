/*Write a C program to input the 
number of terms and display the Fibonacci sequence using a loop.*/
#include <stdio.h>
int main()
{
    int a=0,b=1,c=1;
    int i,n;
        printf("Enter the number of terms: /n");
        scanf("%d /n",&n);
        printf("Fibonacci sequence: /n");
        for(i=0;i<n;i++)
        {
            printf("%d /n",a);
            c=a+b;
            a=b;
            b=c;
        }
    
    return 0;
}