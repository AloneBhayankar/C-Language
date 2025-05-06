// We will write a program that generates a random number and asks the player to guess
// it. If the player’s guess is higher than the actual number, the program displays “Lower
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.

// When the user guesses the correct number, the program displays the number of
// guesses the player used to arrive at the number.

// Hint: Use loop & use a random number generator.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);

    do
    {
        printf("Guess the number");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Enter Lower number please!\n");
        }
        else if(guessed_number<randomNumber){
            printf("Enter Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}

// Output: Congrats!!
// You guessed the number in 13 guesses