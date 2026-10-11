
#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main()
{
    float num1, num2, result;
    char op;

    // Input
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Conditional statements
    if (op == '+')
    {
        result = add(num1, num2);
        printf("Result = %.2f\n", result);
    }
    else if (op == '-')
    {
        result = subtract(num1, num2);
        printf("Result = %.2f\n", result);
    }
    else if (op == '*')
    {
        result = multiply(num1, num2);
        printf("Result = %.2f\n", result);
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            result = divide(num1, num2);
            printf("Result = %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator!\n");
    }

    return 0;
}

// Function definitions
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}


