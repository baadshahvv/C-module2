#include <stdio.h>

int main() {
    int i, num, even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
            even_sum += num;
        } else {
            odd_count++;
            odd_sum += num;
        }
    }

    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}