#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;
    int temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    printf("\nArmstrong numbers between 1 and 1000:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
