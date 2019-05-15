#include <stdio.h>
#include "car.h"

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level


int main()
{
    struct car car1;
    car1.type = VOLVO;
    car1.km = 600;
    car1.gas = 50;

    struct car car2;
    car2.type = TESLA;
    car2.km = 500;
    car2.gas = 40;

    car_stats(car1);
    car_stats(car2);

    return 0;
}

