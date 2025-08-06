#include <stdio.h>

int main() {
    int n, sum = 0; 
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i = 1; 
    while (i <= n) { 
        sum += i;        
        i++; 
    }
    printf("Sum of natural numbers up to %d is %d\n", n, sum); // Output the result
    return 0;
}