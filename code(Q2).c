#include <stdio.h>

int main()
{
    int num1, num2, sum, difference, product;
    float quotient;

    printf("Enter number 1:\n");
    scanf("%d", &num1);

    printf("Enter number 2:\n");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0)
    {
        quotient = (float)num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}