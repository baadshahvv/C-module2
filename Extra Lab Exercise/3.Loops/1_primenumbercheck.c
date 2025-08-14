#include <stdio.h>

int main() {
    int num, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    isPrime = 1; 
    if (num <= 1) {
        isPrime = 0; 
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is NOT a Prime Number.\n", num);

    
    printf("Prime numbers between 1 and %d are:\n", num);
    for (i = 2; i <= num; i++) {
        isPrime = 1; 
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
