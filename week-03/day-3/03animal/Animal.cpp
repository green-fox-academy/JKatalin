//
// Created by Kata on 2019. 04. 17..
//

#include "Animal.h"

Animal:: Animal(int hunger, int thirst){
    setHunger(hunger);
    setThirst(thirst);
}

void Animal::setHunger(int hunger) {
    _hunger = hunger;
}

void Animal::setThirst(int thirst) {
    _thirst = thirst;
}

int Animal::getHunger() const {
    return _hunger;
}

int Animal::getThirst() const {
    return _thirst;
}

void Animal::eat() {
    _hunger = _hunger - 1;
}

void Animal::drink() {
    --_thirst;
}

void Animal::play() {
    ++_hunger;
    ++_thirst;
}


