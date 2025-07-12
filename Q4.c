#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / (float)num2);
    
    printf("Is %d equal to %d? %s\n", num1, num2, (num1 == num2) ? "Yes" : "No");
    printf("Is %d not equal to %d? %s\n", num1, num2, (num1 != num2) ? "Yes" : "No");
    printf("Is %d greater than %d? %s\n", num1, num2, (num1 > num2) ? "Yes" : "No");
    printf("Is %d less than or equal to %d? %s\n", num1, num2, (num1 <= num2) ? "Yes" : "No");

    printf("Logical AND (%d && %d): %s\n", num1 > 0, num2 > 0, (num1 > 0 && num2 > 0) ? "True" : "False");
    printf("Logical OR (%d || %d): %s\n", num1 < 0, num2 < 0, (num1 < 0 || num2 < 0) ? "True" : "False");
    
    return 0;
}
