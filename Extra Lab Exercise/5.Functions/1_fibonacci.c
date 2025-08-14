#include <stdio.h>

long long recursiveCalls = 0;
long long iterativeSteps = 0;

int fibRecursive(int n) {
    recursiveCalls++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibRecursive(n - 1) + fibRecursive(n - 2);
}

int fibIterative(int n) {
    int a = 0, b = 1, c, i;
    iterativeSteps = 0;
    if (n == 0) return 0;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        iterativeSteps++;
    }
    return b;
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence using recursion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibRecursive(i));
    }
    printf("\n");

    int nthRec = fibRecursive(n - 1);
    printf("Nth Fibonacci number (Recursive): %d\n", nthRec);
    printf("Recursive calls made: %lld\n", recursiveCalls);

    int nthIter = fibIterative(n - 1);
    printf("Nth Fibonacci number (Iterative): %d\n", nthIter);
    printf("Iterations made: %lld\n", iterativeSteps);

    return 0;
}
