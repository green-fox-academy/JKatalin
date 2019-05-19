#include <stdio.h>
#include <stdlib.h>
#include "even.h"


int main()
{
    int number;
    printf("Give me a number:\n");
    scanf("%d", &number);

    printf("%d\n", is_it_even(number));

    return 0;
}


// Create a program which asks for a number and stores it
// Create a function which takes a number as a parameter and
// returns 1 if that number is even and returns 0 otherwise
// (in this case 0 is an even number)