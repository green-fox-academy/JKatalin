#include <stdio.h>

int main()
{

    int number = 8;
    int guess;

    printf("What is your guess?");
    scanf("%d", &guess);
    while ( number != guess) {
        if (number < guess) {
            printf("The stored number is lower.\n");
            printf("What is your guess?");
            scanf("%d", &guess);
        } else if (number > guess) {
            printf("The stored number is higher.\n");
            printf("What is your guess?");
            scanf("%d", &guess);
        }
    }

    if (number == guess){
        printf("You find the number: %d\n", number);
    }


    return 0;
}

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8