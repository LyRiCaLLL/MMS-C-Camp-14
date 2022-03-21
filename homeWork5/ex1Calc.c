#include <stdio.h>
int main()
{
    double num1 = 0, num2 = 0, sum = 0;
    char operator;
    while (1 != EOF)
    {
        /* code */

        printf("====================================\n");
        printf("First Num = ");
        scanf(" %lf", &num1);
        printf("For operator use +,-,/,x \n");
        printf("operator = ");
        scanf(" %c", &operator);
        printf("Secand Num = ");
        scanf(" %lf", &num2);

        if (operator== '+')
        {
            sum = num1 + num2;
        }
        else if (operator== '-')
        {
            sum = num1 - num2;
        }
        else if (operator== '/')
        {
            sum = num1 / num2;
        }
        else if (operator== 'x')
        {
            sum = num1 * num2;
        }
        else
        {
            printf("error 404 \n");
            return 1;
        }
        printf("Sum = %.2lf \n", sum);
        printf("====================================\n");
    }
    return 0;
}