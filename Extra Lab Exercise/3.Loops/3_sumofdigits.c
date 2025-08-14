#include <stdio.h>

int main() {
    int number, sum = 0, reversed = 0, digit;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int original = number; 

    
    while (number != 0) {
        digit = number % 10;
        sum += digit; 
        reversed = reversed * 10 + digit; 
        number /= 10; 
    }   

    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", reversed);
    printf("Original number: %d\n", original);

    return 0;
}