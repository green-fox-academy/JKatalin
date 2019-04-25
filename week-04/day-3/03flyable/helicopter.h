//
// Created by Kata on 2019. 04. 24..
//

#ifndef INC_03FLYABLE_HELICOPTER_H
#define INC_03FLYABLE_HELICOPTER_H

#include "vehicle.h"
#include "flyable.h"

class Helicopter : public Vehicle, public Flyable {
public:
    Helicopter(int numberOfWheel, int gasCapacity, std::string name);

    void land() override;
    void fly() override;
    void takeOff() override;

};


#endif //INC_03FLYABLE_HELICOPTER_H
