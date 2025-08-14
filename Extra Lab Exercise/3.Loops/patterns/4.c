#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (max 26): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    for (int i = 1; i <= n; i++) {
        for (char c = 'A'; c < 'A' + i; c++) {
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}
