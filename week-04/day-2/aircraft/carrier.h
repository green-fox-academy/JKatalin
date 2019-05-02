//
// Created by Kata on 2019. 05. 01..
//

#ifndef AIRCRAFT_CARRIER_H
#define AIRCRAFT_CARRIER_H

#include <iostream>
#include <vector>
#include "aircraft.h"
#include "f16.h"
#include "f35.h"


class Carrier {
public:
    Carrier(int _ammo, int _healthPoint);

    void addAircraft(Aircraft *newAircraft);
    void fill();
    void fight(Carrier &otherCarrier);
    std::string getStatus();

    int getHealthPoint() const;
    void setHealthPoint(int healthPoint);

private:
    std::vector<Aircraft *> _aircrafts;
    int _ammo;
    int _healthPoint;

};


#endif //AIRCRAFT_CARRIER_H
