#include <stdio.h>

int main() {
    int oneDArray[5];
    int twoDArray[3][3];
    int sum = 0;
    printf("Enter 5 integers for the one-dimensional array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &oneDArray[i]);
    }
    printf("One-dimensional array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", oneDArray[i]);
    }
    printf("\n");

    printf("Enter 9 integers for the two-dimensional array (3x3 matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &twoDArray[i][j]);
            sum += twoDArray[i][j]; // Calculate the sum of all elements
        }
    }
    printf("Two-dimensional array (3x3 matrix) elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", twoDArray[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements in the two-dimensional array: %d\n", sum);
    return 0;
}