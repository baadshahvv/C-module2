#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int totalRows = 2 * n - 1; 

    for (int i = 1; i <= totalRows; i++) {
        int stars = (i <= n) ? i : totalRows - i + 1;

        for (int j = 1; j <= stars; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
