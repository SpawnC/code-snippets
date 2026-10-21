#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int secret_number;
int attempts_count;
void game_init(void) {
    srand(time(NULL));
    secret_number = rand() % 100 + 1;
    attempts_count = 0;
}
int game_check(int guess) {
    attempts_count++;
    if (guess < secret_number) return -1;
    if (guess > secret_number) return 1;
    return 0;
}
int game_attempts(void) {
    return attempts_count;
}
int game_secret(void) {
    return secret_number;
}
int main(void) {
    int guess;
    int result;
    game_init();
    printf("=== Guess the Number ===\n");
    printf("I've picked a number between 1 and 100\n");
    do {
        printf("Enter a number: ");
        if (scanf("%d", &guess) != 1) {
            printf("Error! Please enter an integer\n");
            return 1;
        }
        if (guess < 1 || guess > 100) {
            printf("The number must be between 1 and 100\n");
            continue;
        }
        result = game_check(guess);
        if (result == -1) {
            printf("My number is higher\n");
        } else if (result == 1) {
            printf("My number is lower\n");
        } else {
            printf("Well done! You guessed the number %d\n", guess);
            printf("Number of attempts: %d\n", game_attempts());
        }
    } while (result != 0);
    return 0;
}