//
// Created by Kata on 2019. 04. 29..
//

#include "animal.h"

Animal::Animal(std::string name, int hunger, int thirst)
{
    setHunger(hunger);
    setThirst(thirst);
    _name = name;
}

void Animal::setHunger(int hunger)
{
    _hunger = hunger;
}

void Animal::setThirst(int thirst)
{
    _thirst = thirst;
}

int Animal::getHunger() const
{
    return _hunger;
}

int Animal::getThirst() const
{
    return _thirst;
}

void Animal::eat()
{
    _hunger = _hunger - 1;
}

void Animal::drink()
{
    --_thirst;
}

void Animal::play()
{
    ++_hunger;
    ++_thirst;
}

const std::string &Animal::getName() const
{
    return _name;
}

