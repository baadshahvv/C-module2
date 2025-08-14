#include <stdio.h>

unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorialRecursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Iterative Factorial of %d: %llu\n", num, factorialIterative(num));
    printf("Recursive Factorial of %d: %llu\n", num, factorialRecursive(num));

    return 0;
}
