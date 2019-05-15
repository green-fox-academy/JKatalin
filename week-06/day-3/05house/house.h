//
// Created by Kata on 2019. 05. 15..
//

#ifndef INC_05HOUSE_HOUSE_H
#define INC_05HOUSE_HOUSE_H

#include <stdio.h>

typedef struct {
    char address[50];
    float price;
    int room_number;
    float area_of_house;

} house_t;

int worth_to_buy(house_t *house);

void print_what_to_do(int bool);

int number_the_worth_to_buy(house_t house_array[], int size);

#endif //INC_05HOUSE_HOUSE_H
