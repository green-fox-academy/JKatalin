//
// Created by Kata on 2019. 04. 24..
//

#include "helicopter.h"

Helicopter::Helicopter(int numberOfWheel, int gasCapacity, std::string name) : Vehicle(numberOfWheel, gasCapacity, name)
{
}

void Helicopter::land()
{
    std::cout << "Helicopters can land at vertical." << std::endl;
}

void Helicopter::fly()
{
    std::cout << "Helicopters fly above city ." << std::endl;
}

void Helicopter::takeOff()
{
    std::cout << "Helicopters can take off the top of the roof." << std::endl;
}
