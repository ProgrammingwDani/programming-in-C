#include <stdio.h>
#include <math.h>

double addition(int num1, int num2)
{
    double result = num1 + num2;
    printf("The addition of %d and %d is %.1lf\n", num1, num2, result);
    return result;
}

double subtraction(int num1, int num2)
{
    double result = num1 - num2;
    printf("The subtraction of %d and %d is %.1lf\n", num1, num2, result);
    return result;
}

double multiplication(int num1, int num2)
{
    double result = num1 * num2;
    printf("The multiplication of %d and %d is %.1lf\n", num1, num2, result);
    return result;
}

double division(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error, cannot divide by 0\n");
        return 0;
    }
    else
    {
        double result = (double) num1 / num2;
        printf("The division of %d and %d is %.1lf\n", num1, num2, result);
        return result;
    }
}

double power(int num1, int num2)
{
    double result = 1;
    for (int i = 1; i <= num2; i++)
    {
        result = result * num1;
    }
    printf("%d to the power %d is %.1lf\n", num1, num2, result);
    return result;
}

double square_root(int num1)
{
    double result = sqrt(num1);
    printf("The square root of %d is %.1lf\n", num1, result);
    return result;
}

int main()
{
    int num1, num2;
    char c;
    double result;

    scanf("%d %c", &num1, &c);

    switch (c)
    {
        case '+':
            scanf("%d", &num2);
            result = addition(num1, num2);
            break;
        case '-':
            scanf("%d", &num2);
            result = subtraction(num1, num2);
            break;
        case '*':
            scanf("%d", &num2);
            result = multiplication(num1, num2);
            break;
        case '/':
            scanf("%d", &num2);
            result = division(num1, num2);
            break;
        case '^':
            scanf("%d", &num2);
            result = power(num1, num2);
            break;
        case 's':
            result = square_root(num1);
            break;
        default:
            printf("Invalid operation\n");
            result = 0;
            break;
    }

    return 0;
}
