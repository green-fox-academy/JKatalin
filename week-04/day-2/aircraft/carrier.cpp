//
// Created by Kata on 2019. 05. 01..
//

#include "carrier.h"

Carrier::Carrier(int ammo, int healthPoint) : _ammo(ammo), _healthPoint(healthPoint)
{
}

void Carrier::addAircraft(Aircraft *newAircraft)
{
    _aircrafts.push_back(newAircraft);
}

void Carrier::fight(Carrier &otherCarrier)
{
    int otherHealth = otherCarrier.getHealthPoint();
    int carrierDemage = 0;

    for (int i = 0; i < _aircrafts.size(); i++) {
        carrierDemage = carrierDemage + _aircrafts.at(i)->fight();
    }

    otherHealth = otherHealth - carrierDemage;
    std::cout << otherHealth << std::endl;
    otherCarrier.setHealthPoint(otherHealth);
}


std::string Carrier::getStatus()
{
    int carrierDemage = 0;
    for (int i = 0; i < _aircrafts.size(); i++) {
        carrierDemage += _aircrafts.at(i)->getCurrentAmmo() * _aircrafts.at(i)->getBaseDemage();
    }

    std::string status = "";
    std::string aircraft = "";

    for (int i = 0; i < _aircrafts.size(); i++) {
        aircraft = aircraft + _aircrafts.at(i)->getStatus() + "\n";
    }

    if (_healthPoint > 0) {
        status = "HP " + std::to_string(_healthPoint) + ", Aircraft count: " + std::to_string(_aircrafts.size()) +
                 ", Ammo storage: " + std::to_string(_ammo) + ", Total damage: " + std::to_string(carrierDemage) +
                 "\n" + aircraft;
    } else {
        status = "It's dead Jim :(";
    }

    return status;
}

int Carrier::getHealthPoint() const
{
    return _healthPoint;
}

void Carrier::setHealthPoint(int healthPoint)
{
    _healthPoint = healthPoint;
}

void Carrier::fill()
{
    try {
        if (_ammo == 0) {
            throw std::string("There is no ammo on the carrier");
        }
        for (int i = 0; i < _aircrafts.size(); i++) {
            if (_aircrafts.at(i)->isPriority()) {
                _ammo = _aircrafts.at(i)->refill(_ammo);
            }
        }
        for (int i = 0; i < _aircrafts.size(); i++) {
            if (_ammo > 0 && _aircrafts.at(i)->isPriority() == false) {
                _ammo = _aircrafts.at(i)->refill(_ammo);
            }
        }
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }
}




