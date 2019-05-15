//
// Created by Kata on 2019. 05. 15..
//
#include "sandwich.h"

float price_of_order(sandwich_t sandwich, int order)
{
    float price = sandwich.price * order;

    return price;
}