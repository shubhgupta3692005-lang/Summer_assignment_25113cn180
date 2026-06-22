#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = (rand() % 100) + 1;
    printf("Welcome to Number Guessing Game\n");
    printf("I have picked a number between 1 and 100. Try to guess it!\n");
    while (1) 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
            printf("Too high! Try again.\n");
        else if (guess < number)
            printf("Too low! Try again.\n");
        else 
        {
            printf("\nCongratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        }
    }
    return 0;
}