#include <stdio.h>

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nPascal's Triangle using loops:\n");
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++)
            printf(" ");
        int num = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    printf("\nPascal's Triangle using recursion:\n");
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++)
            printf(" ");
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}
