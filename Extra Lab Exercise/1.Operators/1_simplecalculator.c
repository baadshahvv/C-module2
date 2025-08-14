#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    int validOperator = 1;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            }
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("Result: %.0lf\n", result);
            }
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            validOperator = 0;
            printf("Error: Invalid operator '%c'. Please use +, -, *, /, or %%.\n", operator);
            break;
    }

    if (validOperator) {
        printf("Calculation completed successfully.\n");
    } else {
        printf("Calculation failed due to invalid input.\n");
    }
    return 0;
}
