#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);


    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }
    

    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }
    

    if (number % 3 == 0 && number % 5 == 0) {
        printf("The number %d is a multiple of both 3 and 5.\n", number);
    } else {
        printf("The number %d is not a multiple of both 3 and 5.\n", number);
    }   
    return 0;
}