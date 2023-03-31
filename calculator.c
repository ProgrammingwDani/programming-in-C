#include <stdio.h>
#include <math.h>
int main
{
    int num1, num2;
    char c;
    double result, sum = 0;
    scanf("%d %c", &num1, &c);
    if (c == '+')
    {
        scanf("%d", &num2);
        result = num1 + num2;
        printf("The addition of %d and %d is %,1lf", num1, num2, result);
    }
    else if (c == '-')
    {
        scanf("%d", &num2);
        result = num1 - num2;
        printf("The substraction of %d and %d is %.1lf", num1, num2, result);
    }
    else if (c == '*')
    {
        scanf("%d", &num2);
        result = num1 / num2;
        printf("The multiplication of %d and %d is %lf", num1, num2, result);
    }
    else if (c == '/')
    {
        scanf("%d", &num2);
        if (num2 == 0)
        {
            printf("Error, cannot divide by 0");
        }
        else
            result = num1 / num2;
        printf("The division of %d and %d is %lf", num1, num2, result);
    }
    else if (c == '^')
    {
        for (int i = 1; i <= num; i++)
        {
            sum = sum + num1;
        }
        printf("%d to the power %d is %lf", num1, num2, result);
    }
    else if (c == 's')
    {
        result = sqrt(num1);
        printf("The square of %d is %lf", num1, result);
    }
    return 0;
}
