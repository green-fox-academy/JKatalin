//
// Created by Kata on 2019. 05. 01..
//

#include "aircraft.h"

Aircraft::Aircraft(std::string type, int maxAmmo, int baseDemage) : _type(type), _maxAmmo(maxAmmo),
                                                                                     _currentAmmo(0),
                                                                                     _baseDemage(baseDemage)
{

}

std::string Aircraft::getType()
{
    return _type;
}

int Aircraft::refill(int ammos)
{
    int remaining = 0;
    int fillAmmo = 0;
    fillAmmo = _maxAmmo - _currentAmmo;
    if ( ammos >= fillAmmo) {
        remaining = ammos - fillAmmo;
        _currentAmmo = _currentAmmo + fillAmmo;
    }else {
        remaining = 0;
        _currentAmmo = _currentAmmo + ammos;
    }


    return remaining;
}

int Aircraft::fight()
{
    int allDemage = _currentAmmo * _baseDemage;
    _currentAmmo = 0;
    return allDemage;

}

std::string Aircraft::getStatus()
{
    std::string status = "";
    status = "Type " + _type + ", Ammo: " + std::to_string(_currentAmmo) + ", Base damage: " +
             std::to_string(_baseDemage) + ", All damage: " + std::to_string(_currentAmmo * _baseDemage);
    return status;
}

int Aircraft::getCurrentAmmo() const
{
    return _currentAmmo;
}

int Aircraft::getBaseDemage() const
{
    return _baseDemage;
}


