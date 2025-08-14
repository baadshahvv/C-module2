#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    srand(time(0));
    number = (rand() % 100) + 1; 

    printf("Guess the number (1-100). You have %d attempts.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf(" Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        } else if (guess > number) {
            printf("Too high! Try a smaller number.\n");
        } else {
            printf("Too low! Try a larger number.\n");
        }

        printf("Attempts left: %d\n", maxAttempts - attempts);
    }

    printf(" Sorry, you've used all attempts. The number was %d.\n", number);
    return 0;
}
