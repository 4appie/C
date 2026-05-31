#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Seed the random number generator
  srand(time(NULL));

  // Generate a random number between 1 and 10
  int secret_number = rand() % 10 + 1;
  int guess;
  int attempts = 0;
  int max_attempts = 5;

  printf("Welcome to the Extended Number Guessing Game!\n");
  printf("I'm thinking of a number between 1 and 10.\n");

  do {
    // Prompt for user input
    printf("Enter your guess (1-10): ");
    scanf("%d", &guess);
    attempts++;

    // Provide feedback
    if (guess < secret_number) {
      printf("Too low! Try again.\n");
    } else if (guess > secret_number) {
      printf("Too high! Try again.\n");
    } else {
      printf("Congratulations! You guessed the number in %d attempts!\n",
             attempts);
      break;
    }

    if (attempts >= max_attempts) {
      printf("Sorry, you've reached the maximum number of attempts. The number "
             "was %d.\n",
             secret_number);
      break;
    }
  } while (guess != secret_number);

  return 0;
}
