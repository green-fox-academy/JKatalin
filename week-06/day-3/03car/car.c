//
// Created by Kata on 2019. 05. 15..
//

#include "car.h"
#include <stdio.h>


const char *get_car_name(enum car_type type)
{
    switch (type) {
        case VOLVO:
            return "Volvo";
        case TOYOTA:
            return "Toyota";
        case LAND_ROVER:
            return "Land Rover";
        case TESLA:
            return "Tesla";
    }
}

void car_stats(struct car car)
{
    if (car.type == TESLA) {
        printf("This is a %s, km is: %.2lf\n", get_car_name(car.type), car.km);
    } else {
        printf("This is a %s, km is: %.2lf, gas is: %.2lf\n", get_car_name(car.type), car.km, car.gas);
    }
}
