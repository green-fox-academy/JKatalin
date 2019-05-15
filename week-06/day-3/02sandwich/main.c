#include <stdio.h>
#include "sandwich.h"

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/


int main()
{
    sandwich_t sandwich1;
    sandwich1.price = 5.2;

    printf("I have to pay: %.2f",price_of_order(sandwich1,3));

    return 0;
}

