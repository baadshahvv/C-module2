#include <stdio.h>

int main() {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (n == 0) { printf("Max digit: 0\n"); return 0; }

    int maxd = 0;
    while (n > 0) {
        int d = n % 10;
        if (d > maxd) maxd = d;
        n /= 10;
    }
    printf("Max digit: %d\n", maxd);
    return 0;
}