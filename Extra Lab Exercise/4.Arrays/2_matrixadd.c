#include <stdio.h>

int main() {
    int i, j, k;
    int mat1[3][3], mat2[3][3], sum[3][3], product[3][3];

    printf("Enter first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat2[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (k = 0; k < 3; k++)
                product[i][j] += mat1[i][k] * mat2[k][j];
        }
    }

    printf("Product of matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
