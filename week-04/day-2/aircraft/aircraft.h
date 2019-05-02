//
// Created by Kata on 2019. 05. 01..
//

#ifndef AIRCRAFT_AIRCRAFT_H
#define AIRCRAFT_AIRCRAFT_H

#include <iostream>

class Aircraft {
public:
    Aircraft(std::string type, int maxAmmo, int baseDemage);

    int fight();
    int refill(int ammos);
    std::string getType();
    std::string getStatus();
    virtual bool isPriority() = 0;

    int getCurrentAmmo() const;

    int getBaseDemage() const;

protected:
    std::string _type;
    int _maxAmmo;
    int _currentAmmo;
    int _baseDemage;
};


#endif //AIRCRAFT_AIRCRAFT_H
