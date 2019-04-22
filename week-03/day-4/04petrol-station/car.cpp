//
// Created by Kata on 2019. 04. 22..
//

#include "car.h"

Car::Car(const int &gasAmount, const int &capacity) {
    setGasAmount(gasAmount);
    setCapacity(capacity);
}


void Car::setGasAmount(int gasAmount) {
    _gasAmount = gasAmount;
}

void Car::setCapacity(int capacity) {
    _capacity = capacity;
}

int Car::getGasAmount() const {
    return _gasAmount;
}

int Car::getCapacity() const {
    return _capacity;
}

bool Car::isFull() {
    if (_gasAmount == _capacity) {
        return true;
    } else {
        return false;
    }
}

void Car::fill() {
    _gasAmount++;
}
