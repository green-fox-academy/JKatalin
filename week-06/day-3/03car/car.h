//
// Created by Kata on 2019. 05. 15..
//

#ifndef INC_03CAR_CAR_H
#define INC_03CAR_CAR_H

enum car_type {
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};

const char *get_car_name(enum car_type type);

struct car {
    enum car_type type;
    double km;
    double gas;
};

void car_stats(struct car car);

#endif //INC_03CAR_CAR_H
