#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows (max 26): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (ch > 'Z') ch = 'A';
            printf("%c ", ch++);
        }
        printf("\n");
    }
    return 0;
}