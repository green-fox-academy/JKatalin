//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_03FLYABLE_VEHICLE_H
#define INC_03FLYABLE_VEHICLE_H

#include <iostream>

class Vehicle {
public:
    Vehicle(int numberOfWheel, int gasCapacity, std::string name);

private:
    int _numberOfWheel;
    int _gasCapacity;
    std::string _name;
};


#endif //INC_03FLYABLE_VEHICLE_H
