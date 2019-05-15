//
// Created by Kata on 2019. 05. 15..
//

#include "house.h"

int worth_to_buy(house_t *house)
{
    if (house->price > house->area_of_house * 400) {
        return 0;
    } else {
        return 1;
    }
}

int number_the_worth_to_buy(house_t house_array[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (worth_to_buy(&house_array[i]) == 1) {
            counter++;
        }
    }
    return counter;
}


void print_what_to_do(int bool)
{
    if (bool == 1) {
        printf("It is a good price for this house based on the market price, buy it.\n");
    } else {
        printf("The price of house is too much based on the market price, don't buy it.\n");
    }
}