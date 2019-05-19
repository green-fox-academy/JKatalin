//
// Created by Kata on 2019. 05. 19..
//

#include "prime.h"

int is_it_prime(int number)
{
    int counter = 0;
    if (number < 2) {
        return 0;
    } else {
        for (int i = 2; i <= number; i++)
            if (number % i == 0)
                counter++;
    }

    if (counter > 1) {
        return 0;
    }
    return 1;
}