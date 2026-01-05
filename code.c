// Number Guessing Game
#include <stdio.h>

int main() {
    int secretNumber = 25;
    int guess;
    int maxAttempts = 5;
    int attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("You have %d attempts to guess the number.\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess == secretNumber) {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("You WIN!\n");
            return 0;
        }
        else if (guess > secretNumber) {
            printf("Hint: Try smaller number.\n\n");
        }
        else {
            printf("Hint: Try larger number.\n\n");
        }
    }

    printf("You LOSE!\n");
    printf("The correct number was: %d\n", secretNumber);

    return 0;
}
