#include <stdio.h>
#include "house.h"
/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/



int main()
{
    house_t house1;
    house1.price = 30000;
    house1.area_of_house = 100;

    house_t house2;
    house2.price = 25000;
    house2.area_of_house = 50;

    house_t house3;
    house3.price = 40000;
    house3.area_of_house = 120;

    printf("%d\n", worth_to_buy(&house1));
    printf("%d\n", worth_to_buy(&house2));

    int bool1 = worth_to_buy(&house1);
    int bool2 = worth_to_buy(&house2);

    print_what_to_do(bool1);
    print_what_to_do(bool2);

    /*const int size = 3;
    house_t house_array[size]= {house1, house2, house3};*/

    house_t house_array[] = {house1, house2, house3};
    int size = sizeof(house_array) / sizeof(house_array[0]);

    printf("You worth to buy from these %d houses.\n", number_the_worth_to_buy(house_array, size));

    return 0;
}

