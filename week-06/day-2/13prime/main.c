#include <stdio.h>
#include <stdlib.h>
#include "prime.h"


int main()
{
    int number;
    printf("Please enter a number:");
    scanf("%d", &number);

    printf("%d", is_it_prime(number));

    return 0;
}


// Create a program which asks for a number and stores it
// Create a function which takes a number as a parameter
// and returns 1 if the number is a prime number and 0 otherwise
// (in this case 0 is not considered as a prime number)
