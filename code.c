//Write a program to input two numbers and display their sum 
#include <stdio.h>
int main()
{
int num1, num2, sum;
printf("Enter number 1:\n");
scanf("%d", &num1);
printf("Enter number 2:\n");
scanf("%d", &num2);

sum=num1+num2;
printf("The sum is %.2d\n",sum);
return 0;
}
