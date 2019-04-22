//
// Created by Kata on 2019. 04. 22..
//
#include <iostream>

#include "station.h"

Station::Station(const int &gasAmount) {
    setGasAmount(gasAmount);
}

void Station::setGasAmount(int gasAmount) {
    _gasAmount = gasAmount;
}

int Station::getGasAmount() const {
    return _gasAmount;
}

int Station::filling(Car &carToBeFilled) {
    while (!carToBeFilled.isFull()) {
        if (_gasAmount > 0) {
            carToBeFilled.fill();
            std::cout << "Filling car!" << std::endl;
            _gasAmount--;
        } else {
            std::cout << "Station ran out of gas!" << std::endl;
        }

    }
    return _gasAmount;
}